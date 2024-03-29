//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSQuery.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface _LSAvailableApplicationsForURLQuery : _LSQuery
{
    NSURL *_URL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_requiresDatabaseMappingEntitlement;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)yieldBundles:(const void *)arg1 context:(struct LSContext *)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1;

@end

