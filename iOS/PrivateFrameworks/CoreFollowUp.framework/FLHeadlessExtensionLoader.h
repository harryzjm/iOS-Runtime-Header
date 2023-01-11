//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLExtensionContext, NSExtension, NSString, NSUUID;
@protocol FLExtensionHostContextInterface;

@interface FLHeadlessExtensionLoader : NSObject
{
    FLExtensionContext *_extensionContext;
    id <FLExtensionHostContextInterface> _delegate;
    NSExtension *_extension;
    CDUnknownBlockType _requestInterruptionBlock;
    NSString *_identifier;
    NSUUID *_sessionID;
}

+ (id)sharedExtensionQueue;
@property(retain, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) CDUnknownBlockType requestInterruptionBlock; // @synthesize requestInterruptionBlock=_requestInterruptionBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)_hostContextForExtension:(id)arg1;
- (id)_loadExtensionForIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)_setupSessionIfNeeded:(id *)arg1;
- (_Bool)_loadExtension:(id *)arg1;
- (id)remoteInterface;
- (void)_terminate;
@property(readonly, nonatomic) NSExtension *extension;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithFollowUp:(id)arg1 andDelegate:(id)arg2;

@end

