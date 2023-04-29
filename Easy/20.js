/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
    let length = s.length/3;
    for (let i = 0; i < length; i++) {
        s = s.replaceAll("()", "");
        s = s.replaceAll("[]", "");
        s = s.replaceAll("{}", "");
    }
    if (s.length == 0) return true; else return false;
};