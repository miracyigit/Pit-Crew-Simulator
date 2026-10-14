# 🏎️ F1 Pitwall Telemetry Simulator (v1.0)

A hardcore, terminal-based Formula 1 race strategy and telemetry simulator written in pure **C++**. Manage your tyre wear, engine temperature, and fuel load across a brutal 30-lap Grand Prix while making split-second tactical decisions from the pitwall.

---

## 🎮 Gameplay & Features

* **30-Lap Hardcore Grand Prix:** A grueling race loop where every single decision dictates whether you take the glory or end up in the barriers.
* **Live Telemetry UI:** Real-time ASCII status bars tracking:
  * 🛞 **Tyre Wear** (Degrades faster under aggressive driving)
  * 🌡️ **Engine Temperature** (Push too hard and your engine crosses the critical 130°C limit!)
  * ⛽ **Remaining Fuel** (Manage your consumption or run dry)
* **Strategic Tactical Choices:**
  * `[1] Push Hard`: Overtake rivals, but heavy penalties on tyres and engine temp.
  * `[2] Balanced Pace`: Protect your components and maintain position.
  * `[3] Box, Box!`: Pit-stop for fresh tyres and full fuel, but pay the price with track position loss.
* **Dynamic Race Outcomes:** 
  * 💥 **DNF (Did Not Finish):** Engine blowouts, flat tires, or fuel shortages with custom ASCII wreckage art.
  * 🏆 **Podium Celebration:** Secure P1-P3 finishes with custom ASCII trophy displays and team radio messages.
  * 🏁 **Checkered Flag:** Standard race finishes for P4-P20.

---

## 📸 Preview (Telemetry Screen)

```text
============================================================
   🏎️  F1 PITSTOP TELEMETRY v1.0  |  LAP: 14 / 30  |  POS: P5  
============================================================
 [TYRE WEAR]: 	   [████████░░] 80%
 [ENGINE TEMP]:    [███████░░░] 110 °C (CRITICAL LIMIT: 130 °C)
 [REMAINING FUEL]: [█████████░] 90%
------------------------------------------------------------
TEAM RADIO: "Talk to me, what's the call for this lap?"
[1] 🔥 Push Hard
[2] ⚖️ Balanced Pace
[3] 🛠️ Box, Box!
