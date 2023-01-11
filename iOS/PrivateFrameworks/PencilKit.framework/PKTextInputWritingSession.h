//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, PKTextInputElement;

@interface PKTextInputWritingSession : NSObject
{
    _Bool _isInvalidated;
    _Bool _didSuppressGesturesOverReservedSpace;
    NSNumber *_sessionIdentifier;
    PKTextInputElement *_currentTargetElement;
    double _beginTimestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double beginTimestamp; // @synthesize beginTimestamp=_beginTimestamp;
@property(readonly, nonatomic) _Bool didSuppressGesturesOverReservedSpace; // @synthesize didSuppressGesturesOverReservedSpace=_didSuppressGesturesOverReservedSpace;
@property(retain, nonatomic) PKTextInputElement *currentTargetElement; // @synthesize currentTargetElement=_currentTargetElement;
@property(readonly, nonatomic) NSNumber *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void)dealloc;
- (void)invalidate;
- (void)setDidSuppressGesturesOverReservedSpace;
- (id)description;
- (id)init;

@end
