//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface OADEffect : NSObject <NSCopying>
{
    int mType;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (int)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1;

@end

