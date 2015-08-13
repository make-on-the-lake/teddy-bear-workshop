### Step 1: Cutting open the bear

Step t:wo is very simple.  Simply cut open the bear and remove some of the
stuffing.  Take care to not lose the stuffing that you've removed.  We'll be
putting some of it back into the stuffed animal later on.

### Step 2: Attaching velcro to the opening

Now it's time to attach some velcro the the opening so that it can be sealed up
later on and your stuffed animal's cuteness isn't ruined from exposed wires.
Simply take some of the provided velcro and cut it to size.  Then stick the
velcro onto the the sides of the opening.

### Step 3: Sewing the servos into the bear

Now it's time to sew the servos into the stuffed animal.  The reason that we
attached the velcro the the opening before sewing the servos in was to ensure
that we had enough space to place for both the servos and the velcro.

Choose a spot around the stuffed animal's shoulders (it doesn't really matter
where.  We will configure the servos later on to be able to work with whichever
placement you choose).  With the servo's horn pointing inward to the bear take
needle and thread and attach the servo to the bear's shoulders by looping the
thread through the holes in the servo.  Once you've ran a reasonable amount of
thread through the loops then you can use some hot glue to secure the thread.

### Step 4: Hooking up the servos to the micro controller

The servos have three wires.  One brown, one orange, and one yellow.  The brown
wire is the ground, the orange is the positive, and the yellow is the signal.
Use jumper wires to connect the brown wire to the `GND` pin of the core.  Also
use the wires to connect the orange wire to the `VIN` pin of the core.  Finally
again use the wires to hook the left servo to `A0` and the right servo to `A5`.
Below is a table of the connections that need to be made

| Servo Wire        | Core Pin |
| ------------- |:-------------:|
| Brown      | `GND` |
| Orange      | `VIN`      |
| Left Yellow | `A0` |
| Right Yellow | `A0` |

Below are a few images to help you work with the breadboard to connect the
servos and the pins.

<div style="text-align:center">
  <img src="{{ site.baseurl }}/public/img/bb1.png" alt="">
  <img src="{{ site.baseurl }}/public/img/bb2.png" alt="">
</div>

### Step 5: Tuning your stuffed animal and flashing your core

Now that you've built the hardware it's time to load the software onto the bear.

If you're doing this at the workshop then you should find an organizer or
volunteer to assist you with this process.  If they are all busy then you can
safely continue onto the next steps and come back to this later.

If you are doing this at home then you're mostly on your own.  You can start
however by cloning the
<a href="https://github.com/make-on-the-lake/teddy-bear-workshop" target="_blank">teddy bear workshop repository</a>
and then run the `./setup` command.  If you need any assistance feel free to
contact William Yaworsky on <a href="http://meetup.com" target="_blank">meetup.com</a>.

Now that your core is flashed it's time to tune your stuffed animal.  Since
everyone's servos will be placed in slightly different locations inside the
stuffed animals we will need to run some tests to figure out the degrees that
the servos can rotate to.

To do this use the particle cli to call the functions `setl` and `setr` to set
each arm's servo rotation.  Once you've found the degrees which the servos can
rotate to you will need to edit the code at `embedded/teddy/config/config.h` to
reflect these degrees.

And now run the `./flash` script to flash your stuffed animal with your custom
tuned firmware.

### Step 6: Creating IFFT recipes

Now it's time to make your stuffed animal do something interesting.  Go to
<a href="https://ifttt.com/" target="_blank">https://ifttt.com/</a> and sign
up/in then select "My Recipes" and then "Create Recipe".  Choose whatever you
want for your `this`.  Follow the prompts until you're given the option to
choose your `that` and then choose Particle.

Next choose "call a function".  The function name you will want to select is
`trigger`.  The function's input will determine what your stuffed animal will do
when the event is triggered.  Below is a list of the available function inputs

|Function Input (case sensitive)      | Effect                                                                           |
|---------------------|----------------------------------------------------------------------------------|
| wave      | Wave the right arm |
|double_wave | Wave the right arm twice |
|raise_arms | Raise both arms up then lower them down |
| egyptian | Dance like an Egyptian |
| arms_down | Lower both arms |

### Step 7: (When you get home) Connecting to home WIFI

Once you are home the easiest way to connect your stuffed animal to the internet
will be to download the Spark Core app.

<div style="text-align:center">
  <img src="{{ site.baseurl }}/public/img/downloading_app.png" style="height:500px" alt="">
</div>

Once you've installed the Spark Core app tap the hamburger menu in the top right
and then select connect a core at the bottom of the screen.  It will then prompt
you to enter your wifi credentials.

If you're having any trouble getting the core to connect please refer to the
documentation at
<a href="https://docs.particle.io/guide/getting-started/start/core/" target="_blank">https://docs.particle.io/guide/getting-started/start/core/</a>.
Of course if you're still having problems you can contact William Yaworsky on
<a href="http://meetup.com" target="_blank">meetup.com</a>.
