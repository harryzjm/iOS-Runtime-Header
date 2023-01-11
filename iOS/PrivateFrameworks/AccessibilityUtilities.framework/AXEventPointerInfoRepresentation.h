//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXEventRepresentationDescription-Protocol.h>
#import <AccessibilityUtilities/NSCopying-Protocol.h>
#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class AXEventRepresentation, NSString;

@interface AXEventPointerInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>
{
    _Bool _pointerIsAbsolute;
    double _pointerX;
    double _pointerY;
    double _pointerZ;
    double _pointerAccelX;
    double _pointerAccelY;
    double _pointerAccelZ;
    double _pointerButtonMask;
    double _pointerButtonNumber;
    double _pointerButtonClickCount;
    double _pointerButtonPressure;
    AXEventRepresentation *_scrollEvent;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) AXEventRepresentation *scrollEvent; // @synthesize scrollEvent=_scrollEvent;
@property(nonatomic) _Bool pointerIsAbsolute; // @synthesize pointerIsAbsolute=_pointerIsAbsolute;
@property(nonatomic) double pointerButtonPressure; // @synthesize pointerButtonPressure=_pointerButtonPressure;
@property(nonatomic) double pointerButtonClickCount; // @synthesize pointerButtonClickCount=_pointerButtonClickCount;
@property(nonatomic) double pointerButtonNumber; // @synthesize pointerButtonNumber=_pointerButtonNumber;
@property(nonatomic) double pointerButtonMask; // @synthesize pointerButtonMask=_pointerButtonMask;
@property(nonatomic) double pointerAccelZ; // @synthesize pointerAccelZ=_pointerAccelZ;
@property(nonatomic) double pointerAccelY; // @synthesize pointerAccelY=_pointerAccelY;
@property(nonatomic) double pointerAccelX; // @synthesize pointerAccelX=_pointerAccelX;
@property(nonatomic) double pointerZ; // @synthesize pointerZ=_pointerZ;
@property(nonatomic) double pointerY; // @synthesize pointerY=_pointerY;
@property(nonatomic) double pointerX; // @synthesize pointerX=_pointerX;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)accessibilityEventRepresentationTabularDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
