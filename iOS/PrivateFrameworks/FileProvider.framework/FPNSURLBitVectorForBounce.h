//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FPNSURLBitVectorForBounce : NSObject
{
    struct __CFBitVector *_vector;
    int _bitCount;
}

@property(readonly, nonatomic) int bitCount; // @synthesize bitCount=_bitCount;
- (_Bool)foundAllAvailableBounceNumbers;
- (id)findNextAvailableBounceNumber;
- (id)findNextAvailableBounceNumberFromIndex:(int)arg1;
- (void)markBounceNumberAsFound:(id)arg1;
- (id)init;

@end

