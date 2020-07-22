//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCROBrailleDisplayInput : NSObject
{
    _Bool _prepareToMemorizeNextKey;
    _Bool _requestPrepareToMemorizeNextKey;
    _Bool _memorizeNextKeyImmediately;
    _Bool _willMemorizeNow;
    _Bool _isQuiet;
    _Bool _newDown;
    _Bool _currentBrailleChordContainsSpacebar;
    _Bool _currentBrailleChordContainsNonSpacebarChordableKey;
    _Bool _spacebarIsDown;
    _Bool _skipBrailleKeyboardKeyTranslation;
    unsigned int _routerEvent;
    unsigned int _currentHIDCommand;
    unsigned int _currentBrailleModifiers;
    unsigned int _downBrailleModifiers;
    double _quietSince;
    double _busySince;
    double _nextWillMemorizeNotificationTime;
    double _memorizeNextKeyImmediatelyTimeout;
    struct __CFArray *_currentChord;
    struct __CFSet *_downKeys;
    struct __CFArray *_currentBrailleChord;
    struct __CFSet *_downBrailleDots;
    double _lastBrailleChordPosted;
    double _brailleCharExponentialMovingAverage;
    double _brailleTranslationTimeout;
}

@property(nonatomic) double brailleTranslationTimeout; // @synthesize brailleTranslationTimeout=_brailleTranslationTimeout;
@property(nonatomic) double brailleCharExponentialMovingAverage; // @synthesize brailleCharExponentialMovingAverage=_brailleCharExponentialMovingAverage;
@property(nonatomic) double lastBrailleChordPosted; // @synthesize lastBrailleChordPosted=_lastBrailleChordPosted;
@property(nonatomic) unsigned int downBrailleModifiers; // @synthesize downBrailleModifiers=_downBrailleModifiers;
@property(nonatomic) unsigned int currentBrailleModifiers; // @synthesize currentBrailleModifiers=_currentBrailleModifiers;
@property(nonatomic) unsigned int currentHIDCommand; // @synthesize currentHIDCommand=_currentHIDCommand;
@property(nonatomic) struct __CFSet *downBrailleDots; // @synthesize downBrailleDots=_downBrailleDots;
@property(nonatomic) struct __CFArray *currentBrailleChord; // @synthesize currentBrailleChord=_currentBrailleChord;
@property(nonatomic) _Bool skipBrailleKeyboardKeyTranslation; // @synthesize skipBrailleKeyboardKeyTranslation=_skipBrailleKeyboardKeyTranslation;
@property(nonatomic) _Bool spacebarIsDown; // @synthesize spacebarIsDown=_spacebarIsDown;
@property(nonatomic) _Bool currentBrailleChordContainsNonSpacebarChordableKey; // @synthesize currentBrailleChordContainsNonSpacebarChordableKey=_currentBrailleChordContainsNonSpacebarChordableKey;
@property(nonatomic) _Bool currentBrailleChordContainsSpacebar; // @synthesize currentBrailleChordContainsSpacebar=_currentBrailleChordContainsSpacebar;
@property(nonatomic) unsigned int routerEvent; // @synthesize routerEvent=_routerEvent;
@property(nonatomic) struct __CFSet *downKeys; // @synthesize downKeys=_downKeys;
@property(nonatomic) struct __CFArray *currentChord; // @synthesize currentChord=_currentChord;
@property(nonatomic) _Bool newDown; // @synthesize newDown=_newDown;
@property(nonatomic) _Bool isQuiet; // @synthesize isQuiet=_isQuiet;
@property(nonatomic) _Bool willMemorizeNow; // @synthesize willMemorizeNow=_willMemorizeNow;
@property(nonatomic) _Bool memorizeNextKeyImmediately; // @synthesize memorizeNextKeyImmediately=_memorizeNextKeyImmediately;
@property(nonatomic) _Bool requestPrepareToMemorizeNextKey; // @synthesize requestPrepareToMemorizeNextKey=_requestPrepareToMemorizeNextKey;
@property(nonatomic) _Bool prepareToMemorizeNextKey; // @synthesize prepareToMemorizeNextKey=_prepareToMemorizeNextKey;
@property(nonatomic) double memorizeNextKeyImmediatelyTimeout; // @synthesize memorizeNextKeyImmediatelyTimeout=_memorizeNextKeyImmediatelyTimeout;
@property(nonatomic) double nextWillMemorizeNotificationTime; // @synthesize nextWillMemorizeNotificationTime=_nextWillMemorizeNotificationTime;
@property(nonatomic) double busySince; // @synthesize busySince=_busySince;
@property(nonatomic) double quietSince; // @synthesize quietSince=_quietSince;
- (void)dealloc;

@end

