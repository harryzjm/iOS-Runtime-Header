//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

__attribute__((visibility("hidden")))
@interface MCMContainerSchemaActionCopyContents
{
    NSURL *_sourceURL;
    NSURL *_destURL;
}

+ (id)actionIdentifier;
- (void).cxx_destruct;
- (_Bool)performWithError:(id *)arg1;
- (id)description;
- (id)initWithSourcePathArgument:(id)arg1 destinationPathArgument:(id)arg2 context:(id)arg3;

@end

