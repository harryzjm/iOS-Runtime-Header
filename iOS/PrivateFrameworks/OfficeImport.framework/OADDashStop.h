//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADDashStop : NSObject <NSCopying>
{
    float mDash;
    float mSpace;
}

+ (void)addStopWithDash:(float)arg1 space:(float)arg2 toArray:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (float)space;
- (float)dash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDash:(float)arg1 space:(float)arg2;

@end

