//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityPlatformTranslation/NSCopying-Protocol.h>

@interface AXPiOSElementData : NSObject <NSCopying>
{
    int _pid;
    CDStruct_26bd94fa _uid;
}

@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(nonatomic) CDStruct_26bd94fa uid; // @synthesize uid=_uid;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
