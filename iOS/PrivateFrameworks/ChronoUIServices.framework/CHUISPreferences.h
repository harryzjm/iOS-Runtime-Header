//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface CHUISPreferences : NSObject
{
    NSUserDefaults *_defaults;
    _Bool _debugViewLabels;
    _Bool _debugSnapshotViewColoring;
    _Bool _debugPrefersStaticSnapshots;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool debugPrefersStaticSnapshots; // @synthesize debugPrefersStaticSnapshots=_debugPrefersStaticSnapshots;
@property(readonly, nonatomic) _Bool debugSnapshotViewColoring; // @synthesize debugSnapshotViewColoring=_debugSnapshotViewColoring;
@property(readonly, nonatomic) _Bool debugViewLabels; // @synthesize debugViewLabels=_debugViewLabels;
- (id)init;

@end
