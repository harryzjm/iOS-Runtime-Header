//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, XCUITransformParameters;

__attribute__((visibility("hidden")))
@interface XCUIPointTransformationRequest : NSObject
{
    XCUITransformParameters *_transformParameters;
    struct CGPoint _point;
}

+ (id)pointTransformationRequestWithPoint:(struct CGPoint)arg1 parameters:(id)arg2;
- (void).cxx_destruct;
@property(readonly) XCUITransformParameters *transformParameters; // @synthesize transformParameters=_transformParameters;
@property(readonly) struct CGPoint point; // @synthesize point=_point;
@property(readonly) NSArray *axParameterRepresentation;

@end

