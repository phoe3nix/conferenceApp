//
//  ExampleClass.h
//  ConferenceTestApp
//
//  Created by Владислав Усачёв on 22/03/2019.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ExampleClass : NSObject

/**
 if you want to create an instance of a class using this method in a swift, then the compiler will wait for some argument, although you have not declared it. This error in Swift 4.2

 @return try! :)
 */
-(instancetype)initWithString;

@end

NS_ASSUME_NONNULL_END
