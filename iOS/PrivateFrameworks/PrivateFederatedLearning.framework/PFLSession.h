//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PFLDataSource, PFLResumable;

@interface PFLSession : NSObject
{
    id <PFLResumable> _underlyingTask;
    id <PFLDataSource> _dataSource;
}

+ (id)sessionForTesting;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) id <PFLDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id <PFLResumable> underlyingTask; // @synthesize underlyingTask=_underlyingTask;
- (void)updateModel:(id)arg1 modelConfiguration:(id)arg2 layerNamesToPrivatize:(id)arg3 privatizationIdentifier:(id)arg4 privatizationNormMax:(double)arg5 privatizationNormBinCount:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)suspend;
- (_Bool)resume;
- (_Bool)registerWithSource:(id)arg1;
- (id)init;

@end
