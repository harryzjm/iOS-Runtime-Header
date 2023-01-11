//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString, TIKeyboardCandidate, TIKeyboardTouchEvent;
@protocol NSCopying><NSObject><NSSecureCoding;

@interface TIKeyboardInput : NSObject <NSSecureCoding>
{
    union {
        long long integerValue;
        struct {
            unsigned int uppercase:1;
            unsigned int autoshifted:1;
            unsigned int popupVariant:1;
            unsigned int multitap:1;
            unsigned int flick:1;
            unsigned int gesture:1;
            unsigned int synthesizedByAcceptingCandidate:1;
            unsigned int doubleSpace:1;
            unsigned int rapidDelete:1;
            unsigned int shiftDown:1;
        } fields;
    } _flags;
    _Bool _backspace;
    NSString *_string;
    id <NSCopying><NSObject><NSSecureCoding> _object;
    TIKeyboardTouchEvent *_touchEvent;
    TIKeyboardCandidate *_acceptedCandidate;
    NSString *_inputManagerHint;
    long long _transliterationType;
    double _timestamp;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) long long transliterationType; // @synthesize transliterationType=_transliterationType;
@property(copy, nonatomic) NSString *inputManagerHint; // @synthesize inputManagerHint=_inputManagerHint;
@property(retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;
@property(retain, nonatomic) TIKeyboardTouchEvent *touchEvent; // @synthesize touchEvent=_touchEvent;
@property(nonatomic, getter=isBackspace) _Bool backspace; // @synthesize backspace=_backspace;
@property(copy, nonatomic) id <NSCopying><NSObject><NSSecureCoding> object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, getter=isShiftDown) _Bool shiftDown;
@property(nonatomic, getter=isRapidDelete) _Bool rapidDelete;
@property(nonatomic, getter=isDoubleSpace) _Bool doubleSpace;
@property(nonatomic, getter=isSynthesizedByAcceptingCandidate) _Bool synthesizedByAcceptingCandidate;
@property(nonatomic, getter=isGesture) _Bool gesture;
@property(nonatomic, getter=isFlick) _Bool flick;
@property(nonatomic, getter=isMultitap) _Bool multitap;
@property(nonatomic, getter=isPopupVariant) _Bool popupVariant;
@property(nonatomic, getter=isAutoshifted) _Bool autoshifted;
@property(nonatomic, getter=isUppercase) _Bool uppercase;

@end
