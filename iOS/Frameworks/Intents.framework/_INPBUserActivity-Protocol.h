//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSData, NSString;

@protocol _INPBUserActivity <NSObject>
@property(readonly, nonatomic) _Bool hasUri;
@property(copy, nonatomic) NSString *uri;
@property(readonly, nonatomic) _Bool hasTitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasData;
@property(copy, nonatomic) NSData *data;
@end

