//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV10EventKitUI30_AppExtensionEventEditHostView15HostCoordinator : NSObject
{
    MISSING_TYPE *parent;
    MISSING_TYPE *identity;
    MISSING_TYPE *conn;
    MISSING_TYPE *connInvalid;
    MISSING_TYPE *configurationChangedPublisherSink;
}

- (void).cxx_destruct;
- (id)init;
- (void)didCompleteWithAction:(long long)arg1 oldToNewObjectIDMap:(id)arg2 waitUntilTimestamp:(id)arg3 serializedDictionary:(id)arg4 objectIDToChangeSetDictionaryMap:(id)arg5 objectIDToPersistentDictionaryMap:(id)arg6 eventConstraints:(id)arg7;
- (void)requestPresentViewWithName:(id)arg1 viewID:(id)arg2 presentationStyle:(long long)arg3;
- (void)hostViewControllerWillDeactivate:(id)arg1 error:(id)arg2;
- (void)hostViewControllerDidActivate:(id)arg1;

@end

