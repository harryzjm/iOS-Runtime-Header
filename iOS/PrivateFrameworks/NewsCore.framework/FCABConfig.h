//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCABConfig : NSObject
{
    unsigned long long _configID;
    NSString *_title;
    NSString *_configLog;
}

@property(readonly, nonatomic) NSString *configLog; // @synthesize configLog=_configLog;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long configID; // @synthesize configID=_configID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfigID:(unsigned long long)arg1 title:(id)arg2 configLog:(id)arg3;

@end

