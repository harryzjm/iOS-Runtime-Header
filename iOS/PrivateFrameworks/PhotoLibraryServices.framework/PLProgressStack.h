//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject
{
    _Bool notifyUsingAssetsdNotificationCenter;
    float currentMultiplier;
    float currentTotal;
    id delegate;
    NSMutableArray *multipliers;
    NSString *mediaPathString;
}

+ (id)unarchiveFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *mediaPathString; // @synthesize mediaPathString;
@property(nonatomic) _Bool notifyUsingAssetsdNotificationCenter; // @synthesize notifyUsingAssetsdNotificationCenter;
@property(nonatomic) float currentTotal; // @synthesize currentTotal;
@property(retain, nonatomic) NSMutableArray *multipliers; // @synthesize multipliers;
@property(nonatomic) float currentMultiplier; // @synthesize currentMultiplier;
@property(nonatomic) id delegate; // @synthesize delegate;
- (id)archiveToDictionary;
- (void)setCurrentMediaPath:(id)arg1;
- (void)popAndUpdate;
- (void)updateProgress:(float)arg1;
- (void)dealloc;
- (float)totalProgress:(float)arg1;
- (void)pop;
- (void)push:(float)arg1;
- (id)initWithDelegate:(id)arg1;

@end

