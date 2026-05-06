# tensor-chain-oracle-flow

`tensor-chain-oracle-flow` explores blockchain tooling with a small C codebase and local fixtures. The technical goal is to implement a C blockchain tooling project for oracle simulation kernel, using seeded input scenarios and deterministic summary checks.

## Why This Exists

The point is to make a small domain rule concrete enough that a reader can change it and immediately see what broke.

## Tensor Chain Oracle Flow Review Notes

`stale` and `baseline` are the cases worth reading first. They show the optimistic and cautious ends of the fixture.

## Capabilities

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/tensor-chain-oracle-walkthrough.md` walks through the case spread.
- The C code includes a review path for `event finality` and `event finality`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Implementation Shape

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C implementation avoids hidden state so fixture changes are easy to reason about.

## Local Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Verification

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Roadmap

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.
