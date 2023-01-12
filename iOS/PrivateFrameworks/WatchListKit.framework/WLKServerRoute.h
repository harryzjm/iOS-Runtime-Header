//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WLKServerRoute : NSObject
{
    _Bool _requiresLocation;
    NSString *_routeName;
    NSString *_host;
    NSString *_path;
    NSString *_requiredKVPType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool requiresLocation; // @synthesize requiresLocation=_requiresLocation;
@property(readonly, nonatomic) NSString *requiredKVPType; // @synthesize requiredKVPType=_requiredKVPType;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, copy, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithDictionary:(id)arg1 routeName:(id)arg2;

@end
