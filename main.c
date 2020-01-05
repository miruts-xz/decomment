#include <stdio.h>
#include <stdlib.h>

typedef int State;

static const State IS = 0; // Initial State
static const State BCMTFSS = 1; // Before Comment Forward Slash State
static const State BCMTASS = 2; // Before Comment Astrix State
static const State ACMTASS = 3; // After Comment Astrix State
static const State ACMTFSS = 4; // After Comment Forward Slash State
static const State DQS = 5; // Double Quote State
static const State SQS = 6; // Single Quote State
static const State BSISQS = 7; // Backslash in Single Quote State
static const State BSIDQS = 8; // Backslash in Double Quote State
static const State BSICMTS = 9; // Backslash in Comment State

State handle_is(int c);
State handle_bcmtfss(int c);
State handle_bcmtass(int c);
State handle_acmtass(int c);
State handle_acmtfss(int c);
State handle_dqs(int c);
State handle_sqs(int c);
State handle_bsisqs(int c);
State handle_bsidqs(int c);
State handle_bsicmts(int c);

State current = IS; //Current State


int main() {
    int c; // Scanned Character
    for (; ;){
        c = getchar();
        if (c == EOF) break;
        switch (current){
            case IS:
                handle_is(c);
                break;
            case BCMTFSS:
                handle_bcmtfss(c);
                break;
            case BCMTASS:
                handle_bcmtass(c);
                break;
            case ACMTASS:
                handle_acmtass(c);
                break;
            case ACMTFSS:
                handle_acmtfss(c);
                break;
            case BSICMTS:
                handle_bsicmts(c);
                break;
            case DQS:
                handle_dqs(c);
                break;
            case SQS:
                handle_sqs(c);
                break;
            case BSISQS:
                handle_bsisqs(c);
                break;
            case BSIDQS:
                handle_bsidqs(c);
                break;
            default:
                break;
        }

    }
    return 0;
}

State handle_is(int c) {
    return 0;
}

State handle_bcmtfss(int c) {
    return 0;
}

State handle_bcmtass(int c) {
    return 0;
}

State handle_acmtass(int c) {
    return 0;
}

State handle_acmtfss(int c) {
    return 0;
}

State handle_dqs(int c) {
    return 0;
}

State handle_sqs(int c) {
    return 0;
}

State handle_bsisqs(int c) {
    return 0;
}

State handle_bsidqs(int c) {
    return 0;
}

State handle_bsicmts(int c) {
    return 0;
}
