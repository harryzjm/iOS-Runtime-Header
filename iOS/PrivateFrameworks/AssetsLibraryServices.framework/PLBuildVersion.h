//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLBuildVersion : NSObject
{
    NSString *_stringRepresentation;
    long long _majorBuildNumber;
    NSString *_majorBuildLetterString;
    long long _minorBuildNumber;
    NSString *_minorBuildLetterString;
}

+ (id)currentBuildVersionString;
@property(readonly, copy, nonatomic) NSString *minorBuildLetterString; // @synthesize minorBuildLetterString=_minorBuildLetterString;
@property(readonly, nonatomic) long long minorBuildNumber; // @synthesize minorBuildNumber=_minorBuildNumber;
@property(readonly, copy, nonatomic) NSString *majorBuildLetterString; // @synthesize majorBuildLetterString=_majorBuildLetterString;
@property(readonly, nonatomic) long long majorBuildNumber; // @synthesize majorBuildNumber=_majorBuildNumber;
@property(readonly, copy, nonatomic) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
- (void)dealloc;
- (id)description;
- (long long)compareBuildVersionString:(id)arg1 withPrecision:(long long)arg2;
- (long long)compareBuildVersion:(id)arg1 withPrecision:(long long)arg2;
- (id)initWithString:(id)arg1;

@end

