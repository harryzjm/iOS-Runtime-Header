//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKShapeDetectionLogger : NSObject
{
}

+ (void)initialize;
+ (id)sharedInstance;
- (id)_newLogPathWithShapeName:(id)arg1;
- (id)_fileName:(id)arg1;
- (id)_logsPath;
- (_Bool)_loggingIsEnabled;
- (void)openFinderWindowToLogs;
- (void)logCHDrawingToDisk:(id)arg1 withIntendedShape:(long long)arg2;

@end
