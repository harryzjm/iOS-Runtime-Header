//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VFXCore/NSObject-Protocol.h>

@class NSString;

@protocol MTLBinding <NSObject>
@property(readonly, getter=isArgument) _Bool argument;
@property(readonly, getter=isUsed) _Bool used;
@property(readonly) unsigned long long index;
@property(readonly) unsigned long long access;
@property(readonly) long long type;
@property(readonly) NSString *name;
@end

