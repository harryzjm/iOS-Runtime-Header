//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NotificationSender : NSObject
{
    NSString *_name;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

