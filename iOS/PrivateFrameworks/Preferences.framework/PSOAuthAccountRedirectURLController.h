//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface PSOAuthAccountRedirectURLController : NSObject
{
    NSMapTable *_redirectHandlerMap;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMapTable *redirectHandlerMap; // @synthesize redirectHandlerMap=_redirectHandlerMap;
- (void).cxx_destruct;
- (id)_redirectURLFromURL:(id)arg1;
- (_Bool)handleOAuthRedirectURL:(id)arg1;
- (void)unRegisterOAuthClientForRedirectURL:(id)arg1;
- (void)registerOAuthClientForRedirectURL:(id)arg1 redirectHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
