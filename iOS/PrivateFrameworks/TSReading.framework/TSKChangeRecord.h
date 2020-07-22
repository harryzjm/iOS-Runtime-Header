//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSKChangeRecord : NSObject
{
    int mKind;
    id mDetails;
}

+ (id)changeRecordWithKind:(int)arg1 details:(id)arg2;
@property(readonly, nonatomic) id details; // @synthesize details=mDetails;
@property(readonly, nonatomic) int kind; // @synthesize kind=mKind;
@property(readonly, nonatomic) _Bool allowedInCommit;
- (void)dealloc;
- (id)initWithKind:(int)arg1 details:(id)arg2;

@end
