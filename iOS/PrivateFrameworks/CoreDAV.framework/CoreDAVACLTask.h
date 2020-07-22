//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask
{
    NSArray *_accessControlEntities;
}

@property(retain, nonatomic) NSArray *accessControlEntities; // @synthesize accessControlEntities=_accessControlEntities;
- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (id)description;
- (id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <CoreDAVACLTaskDelegate> delegate; // @dynamic delegate;

@end

