//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

#import <WatchListKitUI/WLKUIAccountChannelsInterface-Protocol.h>

@class VSAccountStore;

@interface WLKUIAccountChannels : IKJSObject <WLKUIAccountChannelsInterface>
{
    VSAccountStore *_accountStore;
}

@property(retain, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (void)fetchMSOProviderStatus:(id)arg1;
- (void)_sendVideoSubscriberChangedNotificationToTheJavaScript;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

@end
