### Step 1: Flashing the core

The first step will to be to flash your micro controller with the code that will
control the teddy bear.

If you're doing this at the workshop then you should find an organizer or
volunteer to assist you with this process.  If they are all busy then you can
safely continue onto the next steps and come back to this later.

If you are doing this at home then you're mostly on your own.  You can start
however by cloning the <a href="https://github.com/make-on-the-lake/teddy-bear-workshop" target="_blank">teddy bear workshop repository</a>
and then run the `./compile` command.  If you need any assistance feel free to
contact William Yaworsky on <a href="http://meetup.com" target="_blank">meetup.com</a>.

### Step 2: Cutting open the bear

Step t:wo is very simple.  Simply cut open the bear and remove some of the
stuffing.  Take care to not lose the stuffing that you've removed.  We'll be
putting some of it back into the stuffed animal later on.

### Step 3: Attaching velcro to the opening

Now it's time to attach some velcro the the opening so that it can be sealed up
later on and your stuffed animal's cuteness isn't ruined from exposed wires.
Simply take some of the provided velcro and cut it to size.  Then stick the
velcro onto the the sides of the opening.

### Step 4: Sewing the servos into the bear

Now it's time to sew the servos into the stuffed animal.  The reason that we
attached the velcro the the opening before sewing the servos in was to ensure
that we had enough space to place for both the servos and the velcro.

Choose a spot around the stuffed animal's shoulders (it doesn't really matter
where.  We will configure the servos later on to be able to work with whichever
placement you choose).  With the servo's horn pointing inward to the bear take
needle and thread and attach the servo to the bear's shoulders by looping the
thread through the holes in the servo.  Once you've ran a reasonable amount of
thread through the loops then you can use some hot glue to secure the thread.

### Step 5: Hooking up the servos to the micro controller

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

### Step 6: Tuning your stuffed animal

Since it would be pretty difficult to anticipate what angle everyone's servos
will be inserted into their stuffed animal we will now need to tune the code so
that when the actions are activated the micro controller does not attempt to
move the arms to an impossible degree.

To do this we will command the servos to move and record which degrees they can
successfully move to.  We will then modify the source code running on your micro
controller to take into account these values.

<!-- TODO -->

### Step 7: Creating IFFT recipes

<!-- TODO -->

### Step 8: (When you get home) Connecting to home WIFI

<!-- TODO -->

