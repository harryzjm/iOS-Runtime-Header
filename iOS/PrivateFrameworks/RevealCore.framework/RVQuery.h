//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RevealCore/NSSecureCoding-Protocol.h>
#import <RevealCore/RVQueryProtocol-Protocol.h>

@class NSString;

@interface RVQuery : NSObject <NSSecureCoding, RVQueryProtocol>
{
    NSString *_title;
    NSString *_identifier;
    NSString *_userAgent;
    long long _queryID;
    CDUnknownBlockType _queryProvider;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType queryProvider; // @synthesize queryProvider=_queryProvider;
@property(readonly, nonatomic) long long queryID; // @synthesize queryID=_queryID;
@property(readonly, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 clientIdentifier:(id)arg2 userAgent:(id)arg3 queryID:(long long)arg4 queryProvider:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
