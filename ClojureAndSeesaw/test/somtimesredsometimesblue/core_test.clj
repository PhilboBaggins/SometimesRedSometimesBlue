(ns somtimesredsometimesblue.core-test
  (:require [clojure.test :refer :all]
            [somtimesredsometimesblue.core :refer :all]))

(deftest entropy-test
  (testing "Entropy test"
    (dorun (for [i (range 0 5)]
      (let [c (get-colour)]
        (println c)
        (if (= c "red")
          (println "Red!")
          (println "Blue!"))
        (println "")
        )))))
