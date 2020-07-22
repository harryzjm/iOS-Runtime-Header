//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface _EARCommandTagging : NSObject <NSCopying>
{
    struct unique_ptr<quasar::CommandTagging, std::__1::default_delete<quasar::CommandTagging>> _tagging;
    NSString *_commandId;
    NSArray *_tagSequence;
}

@property(readonly, copy, nonatomic) NSArray *tagSequence; // @synthesize tagSequence=_tagSequence;
@property(readonly, copy, nonatomic) NSString *commandId; // @synthesize commandId=_commandId;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)tokensForTag:(id)arg1;
- (id)_initWithQuasarCommandTagging:(const struct CommandTagging *)arg1;

@end

