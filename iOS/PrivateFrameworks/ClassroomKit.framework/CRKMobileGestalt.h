//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKMobileGestalt : NSObject
{
}

+ (id)sharedGestalt;
- (id)answerForQuestion:(struct __CFString *)arg1;
- (id)answerForQuestion:(struct __CFString *)arg1 ofClass:(Class)arg2;
@property(readonly, nonatomic) unsigned long long availableBytes;
@property(readonly, nonatomic) struct CGSize mainScreenSizeInPixels;
@property(readonly, nonatomic) double mainScreenScale;
@property(readonly, copy, nonatomic) NSString *serialNumber;

@end
