//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TTSUTF8Offset : NSObject
{
    long long _cStringOffset;
    long long _actualPos;
    long long _actualLength;
    long long _lengthDifference;
}

@property(nonatomic) long long lengthDifference; // @synthesize lengthDifference=_lengthDifference;
@property(nonatomic) long long actualLength; // @synthesize actualLength=_actualLength;
@property(nonatomic) long long actualPos; // @synthesize actualPos=_actualPos;
@property(nonatomic) long long cStringOffset; // @synthesize cStringOffset=_cStringOffset;
- (id)description;

@end
