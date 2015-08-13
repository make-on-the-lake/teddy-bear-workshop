---
layout: default
title:  Directions
header_class: small
---

# Directions

<div class="print">
{% capture directions %}{% include directions.md %}{% endcapture %}
{{ directions | markdownify }}
</div>
