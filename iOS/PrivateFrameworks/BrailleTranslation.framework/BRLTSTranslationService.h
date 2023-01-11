//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BrailleTranslation/BRLTTranslationServiceInterface-Protocol.h>

@class BRLTSTranslator;
@protocol OS_dispatch_queue;

@interface BRLTSTranslationService : NSObject <BRLTTranslationServiceInterface>
{
    NSObject<OS_dispatch_queue> *_queue;
    BRLTSTranslator *_queueTranslator;
}

+ (id)exportedInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) BRLTSTranslator *queueTranslator; // @synthesize queueTranslator=_queueTranslator;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)loadBrailleBundleForIdentifier:(id)arg1;
- (void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (id)init;

@end
