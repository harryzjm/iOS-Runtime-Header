//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NIExportedObjectForwarder : NSObject
{
    id _exportedObject;
}

- (void).cxx_destruct;
@property __weak id exportedObject; // @synthesize exportedObject=_exportedObject;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithExportedObject:(id)arg1;

@end

