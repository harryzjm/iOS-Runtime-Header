//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSCopying-Protocol.h>
#import <Message/NSObject-Protocol.h>

@class NSString;

@protocol ECMailbox <NSCopying, NSObject>
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *persistentID;
@end

