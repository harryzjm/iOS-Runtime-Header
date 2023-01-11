//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFMessageDataConsumerFactory-Protocol.h>

@class MFMessage, MFMessageLibrary, NSString;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory>
{
    MFMessageLibrary *_library;
    MFMessage *_message;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MFMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) MFMessageLibrary *library; // @synthesize library=_library;
- (id)dataConsumerForPart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
