//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol SZExtractorDelegate;

__attribute__((visibility("hidden")))
@interface SZExtractorInternalDelegate : NSObject
{
    id <SZExtractorDelegate> delegate;
}

- (void).cxx_destruct;
@property __weak id <SZExtractorDelegate> delegate; // @synthesize delegate;
- (void)extractionEnteredPassThroughMode;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)setExtractionProgress:(double)arg1;

@end

