//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CDMFoundation/NSCopying-Protocol.h>

@class NSOrderedSet, NSSet, NSString;

@interface CDMConfig : NSObject <NSCopying>
{
    NSSet *_enabledServices;
    NSOrderedSet *_availableServiceGraphs;
    _Bool _isCliMode;
    _Bool _isFrameworkMode;
    unsigned int _maxConcurrentCount;
}

+ (id)defaultEnabledServiceGraph;
+ (id)defaultCLIServiceGraph;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int maxConcurrentCount; // @synthesize maxConcurrentCount=_maxConcurrentCount;
@property(readonly, nonatomic) _Bool isFrameworkMode; // @synthesize isFrameworkMode=_isFrameworkMode;
@property(readonly, nonatomic) _Bool isCliMode; // @synthesize isCliMode=_isCliMode;
@property(readonly, nonatomic) NSOrderedSet *availableServiceGraphs; // @synthesize availableServiceGraphs=_availableServiceGraphs;
@property(readonly, nonatomic) NSSet *enabledServices; // @synthesize enabledServices=_enabledServices;
- (void)setEnabledServices:(id)arg1;
@property(readonly, nonatomic) NSString *defaultLanguage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForUseByCLI:(_Bool)arg1 frameworkMode:(_Bool)arg2 maxConcurrentCount:(unsigned int)arg3;
- (id)initForUseByCLI:(_Bool)arg1 frameworkMode:(_Bool)arg2;
- (id)initForUseByFramework;
- (id)initForUseByCLI;
- (id)init;

@end
