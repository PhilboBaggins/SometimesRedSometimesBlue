(ns somtimesredsometimesblue.core-test
  (:require [clojure.test :refer :all]
            [somtimesredsometimesblue.core :refer :all]))

(deftest entropy-test
  (testing "Entropy test. The get-colour function should return \"red\" about 50% of the time"
    (let [iterations 1000 colourCount (count (filter #(= %1 "red") (repeatedly iterations get-colour)))]
      (println "get-colour returned \"red\"" colourCount "times out of" iterations "iterations")
      (is (> colourCount 475))
      (is (< colourCount 525))
    )))

