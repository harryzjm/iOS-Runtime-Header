//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/QLPreviewItem-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIDICPreviewItem : NSObject <QLPreviewItem>
{
    NSURL *_URL;
    NSURL *_previewURLOverride;
    NSString *_name;
    NSURL *_URLsToDeleteOnDealloc;
    NSString *_previewItemContentType;
    NSURL *_URLToDeleteOnDealloc;
    NSURL *_previewItemURLForDisplay;
}

@property(retain, nonatomic) NSURL *previewItemURLForDisplay; // @synthesize previewItemURLForDisplay=_previewItemURLForDisplay;
@property(retain, nonatomic) NSURL *URLToDeleteOnDealloc; // @synthesize URLToDeleteOnDealloc=_URLToDeleteOnDealloc;
@property(retain, nonatomic) NSString *previewItemTitle; // @synthesize previewItemTitle=_name;
@property(retain, nonatomic) NSURL *previewItemURLOverride; // @synthesize previewItemURLOverride=_previewURLOverride;
@property(retain, nonatomic) NSURL *previewItemURL; // @synthesize previewItemURL=_URL;
- (void).cxx_destruct;
- (id)_primitive_previewItemContentType;
@property(retain, nonatomic) NSString *previewItemContentType;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

