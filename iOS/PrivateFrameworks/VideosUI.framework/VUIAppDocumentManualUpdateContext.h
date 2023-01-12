//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKUpdateServiceRequest, IKViewElement, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentManualUpdateContext : NSObject
{
    IKUpdateServiceRequest *_currentUpdateRequest;
    NSDictionary *_contextDictionary;
    IKViewElement *_viewElement;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) NSDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;
@property(retain, nonatomic) IKUpdateServiceRequest *currentUpdateRequest; // @synthesize currentUpdateRequest=_currentUpdateRequest;
- (void)updateCurrentUpdateRequestWithAppContext:(id)arg1 documentRef:(id)arg2;
- (void)updateRequestCompletedWithViewElements:(id)arg1 documentRef:(id)arg2;
- (id)initWithContextDictionary:(id)arg1 viewElement:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

