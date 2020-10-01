Sample custom observer
==

This project shows how to create your own sample observer extending the `BodySensor` observer provided with `mc_rtc`. Please refer to the [state observation tutorial](https://jrl-umi3218.github.io/mc_rtc/tutorials/recipes/observers.html) for futher details.

Usage
==

In your controller's configuration, add

```yaml
ObserverPipelines:
- name: TestExampleObserverPipeline
  gui: true
  observers:
  - type: Encoder
  - type: ExampleFloatingBaseObserver
```
