//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WDExportSource : NSObject
{
    NSURL *_url;
    NSString *_subject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

