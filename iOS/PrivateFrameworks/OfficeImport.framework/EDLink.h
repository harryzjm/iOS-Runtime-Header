//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDLink : NSObject
{
    int mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(int)arg1;
- (id)description;
- (id)externalNames;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end
