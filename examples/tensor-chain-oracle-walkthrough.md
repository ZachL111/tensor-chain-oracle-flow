# Tensor Chain Oracle Flow Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 109 | watch |
| stress | nonce pressure | 214 | ship |
| edge | settlement risk | 147 | ship |
| recovery | proof depth | 148 | ship |
| stale | event finality | 224 | ship |

Start with `stale` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `baseline` becomes less cautious without a clear reason, I would inspect the drag input first.
