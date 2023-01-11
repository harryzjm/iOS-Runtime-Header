//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>

@class NSDate, NSNumber, NSString, NSURL;

@interface DEDAttachmentItem : NSObject <DEDSecureArchiving>
{
    NSString *_deviceID;
    NSString *_displayName;
    NSDate *_modificationDate;
    NSNumber *_fileSize;
    NSURL *_attachedPath;
}

+ (id)archivedClasses;
+ (id)itemWithDEItem:(id)arg1;
+ (id)itemWithDictionary:(id)arg1;
+ (id)itemWithURL:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSURL *attachedPath; // @synthesize attachedPath=_attachedPath;
@property(retain) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, copy) NSString *description;
- (_Bool)isLocal;
- (id)serialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
