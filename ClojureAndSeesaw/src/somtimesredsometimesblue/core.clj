(ns somtimesredsometimesblue.core
  (:gen-class)
  (:use seesaw.core seesaw.color))

(defn create-window [colour]
  (invoke-later
    (-> (frame :title "Somtimes red sometimes blue",
               :content (canvas :background (color colour)
                                :size [600 :by 600])
               :on-close :exit)
     pack!
     ;;toggle-full-screen!
     show!)))

(defn get-colour []
  (if (< (rand 1) 0.5)
    "red"
    "blue"))

(defn -main [& args]
  ;; work around dangerous default behaviour in Clojure
  (alter-var-root #'*read-eval* (constantly false))
  (create-window (get-colour)))
